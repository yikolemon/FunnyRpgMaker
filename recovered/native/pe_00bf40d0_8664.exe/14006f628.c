/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f628 */

undefined8 FUN_14006f628(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined6 extraout_var;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  
  iVar10 = *(int *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar7 = FUN_14007a2df(param_1,iVar10 + 1,param_2);
  if (iVar7 == 0) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (iVar10 != 0) {
      pbVar11 = (byte *)(lVar5 + 10);
      do {
        bVar1 = *pbVar11;
        bVar2 = pbVar11[1];
        bVar3 = pbVar11[2];
        uVar8 = *(uint *)(pbVar11 + 3);
        uVar4 = *(uint *)(pbVar11 + 7);
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if (uVar8 == 0) {
LAB_14006f697:
          uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          if (uVar8 != 0) {
            uVar6 = FUN_14007a27f((uint *)((ulonglong)uVar8 + *(longlong *)(param_1 + 0x18)),param_3
                                 );
            if ((int)CONCAT62(extraout_var,uVar6) != 0) goto LAB_14006f6b0;
          }
        }
        else {
          uVar9 = FUN_14007a217((uint *)((ulonglong)uVar8 + *(longlong *)(param_1 + 0x18)),param_3);
          if ((int)uVar9 == 0) goto LAB_14006f697;
LAB_14006f6b0:
          *puVar12 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
          puVar12 = puVar12 + 1;
        }
        pbVar11 = pbVar11 + 0xb;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    *puVar12 = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

