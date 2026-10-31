/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b5dc */

void __fastcall FUN_1020b5dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  FUN_1020b9cc();
  *(undefined4 *)(param_1 + 0x2dd4) = param_2;
  *(undefined4 *)(param_1 + 0x2dc4) = param_2;
  *(undefined4 *)(param_1 + 0x2dd8) = param_3;
  *(undefined4 *)(param_1 + 0x2dc8) = param_3;
  *(undefined1 *)(param_1 + 0x2d8f) = 1;
  cVar2 = FUN_1000e094();
  uVar1 = *(undefined4 *)(param_1 + 0x2d98);
  if (cVar2 != '\0') {
    cVar2 = FUN_1020c5fc();
    if (cVar2 == '\0') goto LAB_1020b649;
  }
  FUN_1020c0df(*(undefined4 *)(param_1 + 0x2d94),uVar1,*(undefined4 *)(param_1 + 0x2d9c),0);
LAB_1020b649:
  FUN_1025b2d0(param_1 + 0xf24,param_1 + 8,0xf1c);
  return;
}

