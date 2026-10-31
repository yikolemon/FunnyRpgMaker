/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012898f */

void __fastcall FUN_1012898f(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x2048);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (param_1 == *(int *)(iVar3 + 0x3a8)) goto LAB_10128a18;
    iVar3 = *(int *)(iVar3 + 0x3c);
  }
  FUN_101028d8();
  FUN_101170bb();
  FUN_10104092(param_1,0);
  FUN_101034e2(param_1,1);
  iVar1 = *(int *)(iVar2 + 0x2048);
  if (*(int *)(iVar1 + 0x3c4) == 0) {
    FUN_1010c53d(iVar1,0);
  }
  if (*(short *)(iVar1 + 0x1a2) == 2) {
    *(undefined4 *)(iVar2 + 0x2050) = 1;
  }
  if ((*(int *)(iVar1 + 0x3c) != iVar3) && (*(code **)(iVar2 + 0xc58) != (code *)0x0)) {
    (**(code **)(iVar2 + 0xc58))(*(int *)(iVar1 + 0x3c));
  }
LAB_10128a18:
  *(undefined4 *)(iVar2 + 0x221c) = 0;
  return;
}

