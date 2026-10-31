/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140029c19 */

undefined4 * FUN_140029c19(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar5 = *(uint *)(param_3 + 2);
  if ((int)uVar5 < 0x22) {
    if (uVar5 == 9) {
      uVar5 = 0x74;
    }
    else if (uVar5 == 10) {
      uVar5 = 0x6e;
    }
    else {
      if (uVar5 != 0xd) goto LAB_140029c66;
      uVar5 = 0x72;
    }
LAB_140029c8f:
    FUN_140029bce(param_2,0x5c);
    FUN_140029bce(param_2,uVar5);
  }
  else {
    if (((uVar5 == 0x22) || (uVar5 == 0x27)) || (uVar5 == 0x5c)) goto LAB_140029c8f;
LAB_140029c66:
    if (uVar5 < 0x100) {
      local_48 = *(undefined4 *)param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140029d6f(param_1,&local_48,0x78,uVar5);
      goto LAB_140029ca9;
    }
    if (uVar5 < 0x10000) {
      local_58 = *(undefined4 *)param_2;
      uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140029e5e(param_1,&local_58,0x75,uVar5);
      goto LAB_140029ca9;
    }
    if (uVar5 < 0x110000) {
      local_68 = *(undefined4 *)param_2;
      uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_60 = *(undefined4 *)(param_2 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140029f40(param_1,&local_68,0x55,uVar5);
      goto LAB_140029ca9;
    }
    puVar6 = (undefined1 *)*param_3;
    puVar1 = (undefined1 *)param_3[1];
    if (puVar6 != puVar1) {
      do {
        local_88 = *(undefined4 *)param_2;
        uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_80 = *(undefined4 *)(param_2 + 1);
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_140029d6f(&local_78,&local_88,0x78,*puVar6);
        *param_2 = local_78;
        param_2[1] = uStack_70;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
LAB_140029ca9:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_a8);
  }
  return param_1;
}

