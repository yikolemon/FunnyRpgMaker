/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271728 */

/* Library Function - Single Match
    _tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_103a5004 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = FUN_10271758(_C,0);
  }
  return _C;
}

