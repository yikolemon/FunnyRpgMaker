/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268d20 */

undefined4 __fastcall FUN_10268d20(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint local_8;
  
  puVar5 = *(uint **)*param_1;
  if (puVar5 == (uint *)0x0) {
LAB_10268e2b:
    uVar1 = 0xffffffff;
  }
  else {
    bVar2 = (byte)DAT_10388d00 & 0x1f;
    uVar3 = (*puVar5 ^ DAT_10388d00) >> bVar2 | (*puVar5 ^ DAT_10388d00) << 0x20 - bVar2;
    puVar4 = (uint *)((puVar5[1] ^ DAT_10388d00) >> bVar2 |
                     (puVar5[1] ^ DAT_10388d00) << 0x20 - bVar2);
    puVar5 = (uint *)((puVar5[2] ^ DAT_10388d00) >> bVar2 |
                     (puVar5[2] ^ DAT_10388d00) << 0x20 - bVar2);
    local_8 = uVar3;
    if (puVar4 == puVar5) {
      uVar6 = (int)((int)puVar5 - uVar3) >> 2;
      uVar7 = uVar6;
      if (0x200 < uVar6) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar6;
      if (uVar7 + uVar6 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar6) {
LAB_10268da1:
        uVar8 = uVar6 + 4;
        local_8 = __recalloc_base(uVar3,uVar8,4);
        FUN_10274120(0);
        if (local_8 == 0) goto LAB_10268e2b;
      }
      else {
        local_8 = __recalloc_base(uVar3,uVar8,4);
        FUN_10274120(0);
        if (local_8 == 0) goto LAB_10268da1;
      }
      uVar3 = DAT_10388d00;
      puVar4 = (uint *)(local_8 + uVar6 * 4);
      puVar5 = (uint *)(local_8 + uVar8 * 4);
      uVar7 = (uint)((int)puVar5 + (3 - (int)puVar4)) >> 2;
      if (puVar5 < puVar4) {
        uVar7 = 0;
      }
      puVar9 = puVar4;
      if (uVar7 != 0) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = uVar3;
          puVar9 = puVar9 + 1;
        }
      }
    }
    uVar3 = FUN_10268628(*(undefined4 *)param_1[1]);
    *puVar4 = uVar3;
    uVar1 = FUN_10268628(local_8);
    **(undefined4 **)*param_1 = uVar1;
    uVar1 = FUN_10268628(puVar4 + 1);
    *(undefined4 *)(*(int *)*param_1 + 4) = uVar1;
    uVar1 = FUN_10268628(puVar5);
    *(undefined4 *)(*(int *)*param_1 + 8) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

