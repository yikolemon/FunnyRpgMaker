/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d024 */

/* WARNING: Removing unreachable block (ram,0x00014000d02f) */

void Unwind_14000d024(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  longlong lVar3;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  undefined1 unaff_R15B;
  
  *(int *)(param_2 + -0x73) = *(int *)(param_2 + -0x73) + (int)param_1;
  lVar3 = CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),unaff_R15B);
  uVar1 = *(uint *)(param_4 + param_1 * 4);
  *(undefined8 *)(lVar3 + -8) = 0x14000d03f;
  FUN_14000cd62(unaff_RDI + 0x40);
  if ((uVar1 & unaff_EBX) == 0) {
    *unaff_RSI = 0;
    *(undefined8 *)(unaff_RSI + 8) = 0;
  }
  else {
    *(undefined4 *)(unaff_RBP + -0x30) = *(undefined4 *)(unaff_RBP + -0x18);
    *(undefined4 *)(unaff_RBP + -0x2c) = *(undefined4 *)(unaff_RBP + -0x14);
    *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RBP + -0x10);
    *(undefined4 *)(unaff_RBP + -0x24) = *(undefined4 *)(unaff_RBP + -0xc);
    *(undefined1 *)(unaff_RBP + -0x18) = 0;
    *(undefined8 *)(unaff_RBP + -0x10) = 0;
    uVar2 = *(undefined8 *)(unaff_RDI + 0x60);
    *(undefined8 *)(lVar3 + -8) = 0x14000d068;
    FUN_14000a108(uVar2,unaff_RBP + -0x30);
    *unaff_RSI = 1;
    *(undefined8 *)(unaff_RSI + 8) = *(undefined8 *)(unaff_RDI + 0x60);
  }
  *(undefined8 *)(lVar3 + -8) = 0x14000d08a;
  FUN_140004b06(unaff_RBP + -0x18);
  return;
}

