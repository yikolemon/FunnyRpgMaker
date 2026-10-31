/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153ba4 */

undefined8 FUN_180153ba4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_78;
  puVar4 = (undefined4 *)FUN_1801537ff(param_1,*(undefined4 *)(param_1 + 0x7c));
  if ((puVar4 != (undefined4 *)0x0) && ((puVar4[1] & 0x20) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar9 = (uint)*(short *)(param_1 + 0x80);
    uVar7 = (int)((ulonglong)((longlong)puVar4 - lVar2) >> 3) * -0x49249249 + uVar9;
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 8))) {
      uVar1 = *(uint *)(lVar2 + 4 + (ulonglong)uVar7 * 0x38);
      if (((uVar1 & 0x20) == 0) && (((uVar1 ^ puVar4[1]) & 0xc0) == 0)) {
        puVar8 = (undefined4 *)(lVar2 + (ulonglong)uVar7 * 0x38);
        local_28 = *(undefined8 *)(puVar4 + 0xc);
        local_58 = *puVar4;
        uStack_54 = puVar4[1];
        uStack_50 = puVar4[2];
        uStack_4c = puVar4[3];
        local_48 = puVar4[4];
        uStack_44 = puVar4[5];
        uStack_40 = puVar4[6];
        uStack_3c = puVar4[7];
        local_38 = puVar4[8];
        uStack_34 = puVar4[9];
        uStack_30 = puVar4[10];
        uStack_2c = puVar4[0xb];
        puVar6 = puVar8 + 0xe;
        puVar3 = puVar8;
        if (0 < *(short *)(param_1 + 0x80)) {
          puVar6 = puVar4;
          puVar3 = puVar4 + 0xe;
        }
        uVar7 = -uVar9;
        if ((int)-uVar9 < 0) {
          uVar7 = uVar9;
        }
        FUN_1802a82f0(puVar6,puVar3,(ulonglong)uVar7 * 0x38);
        *(undefined8 *)(puVar8 + 0xc) = local_28;
        puVar8[8] = local_38;
        puVar8[9] = uStack_34;
        puVar8[10] = uStack_30;
        puVar8[0xb] = uStack_2c;
        puVar8[4] = local_48;
        puVar8[5] = uStack_44;
        puVar8[6] = uStack_40;
        puVar8[7] = uStack_3c;
        *puVar8 = local_58;
        puVar8[1] = uStack_54;
        puVar8[2] = uStack_50;
        puVar8[3] = uStack_4c;
        if ((*(byte *)(param_1 + 0x1a) & 0x40) != 0) {
          FUN_18011d4cf();
        }
        uVar5 = 1;
        goto LAB_180153c13;
      }
    }
  }
  uVar5 = 0;
LAB_180153c13:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_78);
}

