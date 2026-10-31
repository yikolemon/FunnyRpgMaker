/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa104 */

/* Library Function - Single Match
    toupper
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl toupper(int _C)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_140f32750 == 0) {
    if (_C - 0x61U < 0x1a) {
      uVar2 = (ulonglong)(_C - 0x20);
    }
  }
  else {
    uVar1 = FUN_1401aa130(uVar2,0);
    uVar2 = (ulonglong)uVar1;
  }
  return (int)uVar2;
}

