/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003d9e */

LPSTR FUN_140003d9e(LPSTR param_1,UINT param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  LPSTR pCVar4;
  
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
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  uVar3 = param_3[1];
  if (uVar3 == 0) {
    return param_1;
  }
  if (uVar3 >> 0x1f == 0) {
    uVar3 = FUN_1400893b0(param_2,(LPCWSTR)*param_3,(int)uVar3,(LPSTR)0x0,0);
    uVar2 = (undefined4)(uVar3 >> 0x20);
    if (uVar3 >> 0x20 == 0) {
      FUN_140003ed0((undefined8 *)param_1,(longlong)(int)uVar3,0);
      pCVar4 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pCVar4 = *(LPSTR *)param_1;
      }
      uVar3 = FUN_1400893b0(param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),pCVar4,(int)uVar3);
      uVar2 = (undefined4)(uVar3 >> 0x20);
      if (uVar3 >> 0x20 == 0) {
        return param_1;
      }
      goto LAB_140003e5f;
    }
  }
  else {
    uVar2 = 0x16;
    FUN_140003e8d(0x16);
  }
  uVar2 = FUN_14000401c(uVar2);
LAB_140003e5f:
  FUN_14000401c(uVar2);
  pcVar1 = (code *)swi(3);
  pCVar4 = (LPSTR)(*pcVar1)();
  return pCVar4;
}

