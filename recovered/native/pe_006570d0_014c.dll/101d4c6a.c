/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4c6a */

void FUN_101d4c6a(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    uVar7 = 0x40360000;
    uVar2 = DAT_103084d8;
    uVar3 = DAT_103084e0;
    uVar4 = DAT_103084e8;
  }
  else {
    uVar7 = 0x40568000;
    uVar2 = DAT_103084c8;
    uVar3 = DAT_103084d0;
    uVar4 = DAT_10308420;
  }
  uVar6 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  FUN_101d47b2(uVar5);
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(uVar5,uVar6,uVar7,uVar4,uVar3,uVar2);
}

