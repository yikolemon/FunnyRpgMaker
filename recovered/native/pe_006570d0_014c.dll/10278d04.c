/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278d04 */

/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __fastcall expand_if_necessary(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[1] == param_1[2]) {
    if (*param_1 == 0) {
      iVar2 = FUN_10275d90(4,4);
      *param_1 = iVar2;
      FUN_10274120(0);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        param_1[1] = iVar2;
        param_1[2] = iVar2 + 0x10;
        goto LAB_10278d12;
      }
    }
    else {
      uVar3 = param_1[2] - *param_1 >> 2;
      if (uVar3 < 0x80000000) {
        iVar2 = __recalloc_base(*param_1,uVar3 * 2,4);
        if (iVar2 == 0) {
          uVar1 = 0xc;
        }
        else {
          *param_1 = iVar2;
          param_1[1] = iVar2 + uVar3 * 4;
          param_1[2] = iVar2 + uVar3 * 8;
          uVar1 = 0;
        }
        FUN_10274120(0);
        return uVar1;
      }
    }
    uVar1 = 0xc;
  }
  else {
LAB_10278d12:
    uVar1 = 0;
  }
  return uVar1;
}

