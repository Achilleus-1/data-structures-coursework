# Development

Python 3.12 and GCC are required. `python tools/check_repository.py` compiles
the linked-list stack, sorting benchmark and supported graph/hash-table targets
separately. Existing Makefiles provide the corresponding manual builds.

`trees-and-huffman/tree.c` is an archival partial submission: its original
tree.h and Data/ inputs are missing. Obtain those from an authorized original
source to reconstruct that exercise. They are not guessed or redistributed here.
`hash-table-graph/problem3.c` is also outside the supported target list; consult
its original scaffolding before attempting to build it. This repository documents
what builds rather than implying that every archived fragment is complete.
