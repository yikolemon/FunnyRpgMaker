/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011c8d8 */

/* Library Function - Single Match
    tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl tolower(int _C)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_140354b80 == 0) {
    if (_C - 0x41U < 0x1a) {
      uVar2 = (ulonglong)(_C + 0x20);
    }
  }
  else {
    uVar1 = FUN_14011c904(uVar2,0);
    uVar2 = (ulonglong)uVar1;
  }
  return (int)uVar2;
}

