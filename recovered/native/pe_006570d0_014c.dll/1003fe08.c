/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fe08 */

void FUN_1003fe08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_2c [21];
  undefined1 local_17 [3];
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_2c;
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  uVar6 = __alldiv(uVar1,iVar2,10000000,0);
  uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar4 = (int)uVar5 >> 0x1f;
  uVar3 = (uint)uVar6 ^ uVar4;
  local_14 = FUN_100255fd(auStack_2c,uVar3 - uVar4,((uVar5 ^ uVar4) - uVar4) - (uint)(uVar3 < uVar4)
                          ,0x15);
  uVar1 = (uint)(0xff676980 < uVar1);
  if ((SBORROW4(-1,iVar2) != SBORROW4(-1 - iVar2,uVar1)) == (int)((-1 - iVar2) - uVar1) < 0) {
    *(undefined1 *)(local_14 + -1) = 0x2d;
    local_14 = local_14 + -1;
  }
  FUN_1001909c(local_14,local_17);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

