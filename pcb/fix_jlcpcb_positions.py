"""
@author: max3-2

Fixes socket position of some jlcpcb parts. Copy and edit of PurpleOwl idea,
improved using some more advanced tools.
From there, it says that:

The JLCPCB footprint for the Kailh hotswap sockets is centered around the
socket alone. Unlike the the Acheron MX100H footprint that I am using for the
entire switch (holes and socket). Hence, some fiddling is required to position
the socket in the right place - which can be confirmed in the JLCPCB assembly
viewer.

First arg is initial file, second arg is output file. If not supplied,
generates file with _edited suffix.
"""
import sys
import numpy as np
import pandas as pd
from pathlib import Path

mil = 25.4 / 1000

assert len(sys.argv) > 1, "Please supply input file as first arg"

inp_file = Path(sys.argv[1])
inp_data = pd.read_csv(inp_file)
switches = inp_data['Package'].str.startswith('MX')

data = inp_data.copy()

# JLCPCB origin is at bottom-left with axes growing up and right.
# rotate 180
data.loc[switches, 'Rotation'] += 180.

# move up by 150mil
data.loc[switches, 'Mid Y'] += 150 * mil

# move right by 25mil
data.loc[switches, 'Mid X'] += 25 * mil

target = inp_file.parent / (inp_file.stem + '_edited.csv')
data.to_csv(target, index=False, float_format='%.3f')
