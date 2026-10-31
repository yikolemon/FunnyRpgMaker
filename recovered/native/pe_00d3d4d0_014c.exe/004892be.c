/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004892be */

int __cdecl
FUN_004892be(uint param_1,undefined4 param_2,undefined1 ****param_3,int param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  
  if (param_5 == 0) {
    *(undefined1 *)(param_6 + 7) = 1;
    param_6[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  }
  else {
    if ((param_3 == (undefined1 ****)0x0) || (param_4 == 0)) {
      *(undefined1 *)(param_6 + 7) = 1;
      param_6[6] = 0x16;
      param_7 = param_6;
    }
    else {
      iVar1 = FUN_0048a3b2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar1 < 0) {
        *(undefined1 *)param_3 = 0;
      }
      if (iVar1 != -2) {
        return iVar1;
      }
      *(undefined1 *)(param_6 + 7) = 1;
      param_6[6] = 0x22;
    }
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  }
  return -1;
}

