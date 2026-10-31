/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a2f4b */

int __cdecl
FUN_004a2f4b(uint *param_1,uint *param_2,uint param_3,LPCWSTR param_4,uint param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 == (uint *)0x0) {
    if (param_3 != 0) goto LAB_004a2f8d;
  }
  else {
    if (param_3 == 0) {
LAB_004a2f8d:
      *(undefined1 *)(param_6 + 7) = 1;
      param_6[6] = 0x16;
      FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
      return 0x16;
    }
    *(undefined1 *)param_2 = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (uVar2 < 0x80000000) {
    iVar1 = FUN_004a2caa(param_2,param_4,uVar2,param_6);
    if (iVar1 == -1) {
      if (param_2 != (uint *)0x0) {
        *(undefined1 *)param_2 = 0;
      }
      if ((char)param_6[7] == '\0') {
        return 0;
      }
      return param_6[6];
    }
    uVar2 = iVar1 + 1;
    if (param_2 != (uint *)0x0) {
      if (param_3 < uVar2) {
        if (param_5 != 0xffffffff) {
          *(undefined1 *)param_2 = 0;
          iVar3 = 0x22;
          goto LAB_004a2fe9;
        }
        iVar3 = 0x50;
        uVar2 = param_3;
      }
      *(undefined1 *)((uVar2 - 1) + (int)param_2) = 0;
    }
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar2;
    }
  }
  else {
LAB_004a2fe9:
    param_6[6] = iVar3;
    *(undefined1 *)(param_6 + 7) = 1;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  }
  return iVar3;
}

