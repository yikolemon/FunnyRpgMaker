/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404058 */

LPSTR __cdecl FUN_00404058(LPSTR param_1,UINT param_2,LPCWSTR param_3,int *param_4)

{
  void *pvVar1;
  uint uVar2;
  LPSTR pCVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  longlong lVar5;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  pvVar1 = ExceptionList;
  local_18 = &LAB_00406f90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x14] = '\x0f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  local_14 = 0;
  if (param_4 == (int *)0x0) {
    ExceptionList = pvVar1;
    return param_1;
  }
  if ((int)param_4 < 0) {
    FUN_0040413d(0x16);
    iVar4 = extraout_EDX;
  }
  else {
    lVar5 = FUN_00481bf0(param_2,param_3,(int)param_4,(LPSTR)0x0,0);
    iVar4 = (int)((ulonglong)lVar5 >> 0x20);
    uVar2 = (uint)lVar5;
    if (iVar4 == 0) {
      FUN_0040416c(param_1,uVar2,0);
      pCVar3 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pCVar3 = *(LPSTR *)param_1;
      }
      lVar5 = FUN_00481bf0(param_2,param_3,(int)param_4,pCVar3,uVar2);
      iVar4 = (int)((ulonglong)lVar5 >> 0x20);
      if (iVar4 == 0) {
        ExceptionList = local_1c;
        return param_1;
      }
      goto code_r0x0040411f;
    }
  }
  FUN_004042f8(iVar4);
  iVar4 = extraout_EDX_00;
code_r0x0040411f:
  FUN_004042f8(iVar4);
  local_1c = &stack0xfffffffc;
  pCVar3 = (LPSTR)FUN_0040230a(param_4);
  return pCVar3;
}

