/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cbdbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cbdbc(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar8;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar5;
  ulonglong uVar7;
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar6 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x328);
  iVar2 = *(int *)(uVar8 + 8);
  *(ulonglong *)(uVar6 - 8) = (ulonglong)unaff_EDI;
  if (iVar2 != -1) {
    *(undefined8 *)(uVar6 - 0x10) = *(undefined8 *)(uVar8 + 8);
    *(undefined8 *)(uVar6 - 0x18) = 0x1408cbde0;
    FUN_14088cbc0();
    param_1 = (undefined4)*(undefined8 *)(uVar6 - 0x10);
  }
  *(undefined8 *)(uVar6 - 0x10) = 0x50;
  *(undefined8 *)(uVar6 - 0x18) = 0;
  *(ulonglong *)(uVar6 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 800);
  *(undefined8 *)(uVar6 - 0x28) = 0x1408cbdf1;
  FUN_1408b3720();
  *(undefined8 *)(uVar6 - 0x28) = 0x2cc;
  *(undefined8 *)(uVar6 - 0x30) = 0;
  *(ulonglong *)(uVar6 - 0x38) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2d0);
  *(undefined8 *)(uVar6 - 0x40) = 0x1408cbe04;
  FUN_1408b3720();
  uVar5 = (uint)(uVar6 - 0x38);
  uVar4 = uVar5 + 0x18;
  uVar7 = (ulonglong)uVar4;
  *(int *)(uVar8 - 0x328) = (int)&stack0xfffffffffffffff8 + -800;
  iVar2 = (int)&stack0xfffffffffffffff8 + -0x2d0;
  *(int *)(uVar8 - 0x324) = iVar2;
  *(int *)(uVar8 - 0x220) = iVar2;
  *(undefined4 *)(uVar8 - 0x224) = param_1;
  *(undefined4 *)(uVar8 - 0x228) = param_2;
  *(undefined4 *)(uVar8 - 0x22c) = unaff_EBX;
  *(undefined4 *)(uVar8 - 0x230) = unaff_ESI;
  *(uint *)(uVar8 - 0x234) = unaff_EDI;
  *(undefined2 *)(uVar8 - 0x208) = in_SS;
  *(undefined2 *)(uVar8 - 0x214) = in_CS;
  *(undefined2 *)(uVar8 - 0x238) = in_DS;
  *(undefined2 *)(uVar8 - 0x23c) = in_ES;
  *(undefined2 *)(uVar8 - 0x240) = in_FS;
  *(undefined2 *)(uVar8 - 0x244) = in_GS;
  *(ulonglong *)(uVar7 - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar5,0x18) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(0xffffffe7 < uVar5) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(uVar8 - 0x210) = *(undefined8 *)(uVar7 - 8);
  *(undefined4 *)(uVar8 - 0x218) = *(undefined4 *)(uVar8 + 4);
  uVar4 = (int)&stack0xfffffffffffffff8 + 4;
  *(uint *)(uVar8 - 0x20c) = uVar4;
  *(undefined4 *)(uVar8 - 0x2d0) = 0x10001;
  *(undefined4 *)(uVar8 - 0x21c) = *(undefined4 *)((ulonglong)uVar4 - 4);
  *(undefined4 *)(uVar8 - 800) = *(undefined4 *)(uVar8 + 0xc);
  *(undefined4 *)(uVar8 - 0x31c) = *(undefined4 *)(uVar8 + 0x10);
  *(undefined4 *)(uVar8 - 0x314) = *(undefined4 *)(uVar8 + 4);
  pcVar1 = _DAT_150c29ede;
  *(undefined8 *)(uVar7 - 8) = 0x1408cbeba;
  iVar2 = (*pcVar1)();
  *(undefined8 *)(uVar7 - 8) = 0;
  pcVar1 = _DAT_150c29f7c;
  *(undefined8 *)(uVar7 - 0x10) = 0x1408cbec4;
  (*pcVar1)();
  *(ulonglong *)(uVar7 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x328);
  pcVar1 = _DAT_150c29fa9;
  *(undefined8 *)(uVar7 - 0x18) = 0x1408cbed1;
  iVar3 = (*pcVar1)();
  if (((iVar3 == 0) && (iVar2 == 0)) && (*(int *)(uVar8 + 8) != -1)) {
    *(undefined8 *)(uVar7 - 0x18) = *(undefined8 *)(uVar8 + 8);
    *(undefined8 *)(uVar7 - 0x20) = 0x1408cbee7;
    FUN_14088cbc0();
  }
  uVar4 = *(uint *)(uVar8 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar7 - 0x10) = &UNK_1408cbef3;
  FUN_1408802b0(uVar4 ^ (uint)&stack0xfffffffffffffff8);
}

