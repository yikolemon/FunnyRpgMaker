/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276d96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140276d96(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 auStack_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  if (0x317 < (longlong)param_2 - (longlong)param_1) {
    puVar6 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        FUN_140276f26(param_1,puVar6);
        lVar5 = (longlong)puVar6 - (longlong)param_1;
        do {
          FUN_14027711a(param_1,puVar6);
          puVar6 = puVar6 + -3;
          lVar5 = lVar5 + -0x18;
        } while (0x18 < lVar5);
        goto LAB_140276ef4;
      }
      FUN_140276fd6(&local_58,param_1,puVar6);
      puVar7 = uStack_50;
      param_2 = local_58;
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if ((longlong)local_58 - (longlong)param_1 < (longlong)puVar6 - (longlong)uStack_50) {
        FUN_140276d96(param_1,local_58,param_3);
        param_1 = puVar7;
        param_2 = puVar6;
      }
      else {
        FUN_140276d96(uStack_50,puVar6,param_3);
      }
      puVar6 = param_2;
    } while (0x317 < (longlong)param_2 - (longlong)param_1);
  }
  if ((param_1 != param_2) && (param_1 + 3 != param_2)) {
    lVar5 = 0x18;
    puVar6 = param_1;
    puVar7 = param_1 + 3;
    do {
      uVar2 = puVar6[3];
      puVar3 = (ulonglong *)puVar6[4];
      puVar4 = (ulonglong *)puVar6[5];
      lVar8 = lVar5;
      do {
        puVar6 = (ulonglong *)((longlong)param_1 + lVar8);
        if (*(ulonglong *)((longlong)param_1 + lVar8 + -0x18) <= uVar2) break;
        puVar6[2] = *(ulonglong *)((longlong)param_1 + lVar8 + -8);
        *puVar6 = *(ulonglong *)((longlong)param_1 + lVar8 + -0x18);
        puVar6[1] = *(ulonglong *)((longlong)param_1 + lVar8 + -0x10);
        lVar8 = lVar8 + -0x18;
        puVar6 = param_1;
      } while (lVar8 != 0);
      *puVar6 = uVar2;
      local_58._0_4_ = SUB84(puVar3,0);
      local_58._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
      uStack_50._0_4_ = SUB84(puVar4,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
      *(undefined4 *)(puVar6 + 1) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_58._4_4_;
      *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_50._4_4_;
      puVar1 = puVar7 + 3;
      lVar5 = lVar5 + 0x18;
      puVar6 = puVar7;
      puVar7 = puVar1;
      local_58 = puVar3;
      uStack_50 = puVar4;
    } while (puVar1 != param_2);
  }
LAB_140276ef4:
  if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_40 ^ (ulonglong)auStack_88);
  }
  return;
}

