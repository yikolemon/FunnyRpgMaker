/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4b8c */

void FUN_101d4b8c(int param_1)

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
    uVar7 = 0x40310000;
    uVar2 = DAT_103084b8;
    uVar3 = DAT_10303ab8;
    uVar4 = DAT_103084c0;
  }
  else {
    uVar7 = 0x40570000;
    uVar2 = DAT_103084a8;
    uVar3 = DAT_103084b0;
    uVar4 = DAT_10308498;
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

