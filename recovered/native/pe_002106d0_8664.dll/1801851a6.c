/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801851a6 */

undefined8 * FUN_1801851a6(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_98 [8];
  undefined1 local_90 [32];
  undefined1 local_70 [24];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_54 = *param_3;
  puVar3 = (undefined8 *)FUN_18007ac02(*(undefined8 *)(param_1 + 8));
  *param_2 = *puVar3;
  local_48 = param_2 + 1;
  local_50 = param_2;
  FUN_180003216(local_48,puVar3 + 1);
  local_48 = local_50 + 5;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  FUN_180185494(local_48,(longlong)(puVar3[6] - puVar3[5]) >> 6,puVar3 + 5,puVar3 + 6);
  puVar3 = local_48;
  lVar4 = FUN_1801856e0(*(undefined8 *)(param_1 + 0x10),&local_54);
  if (lVar4 != **(longlong **)(param_1 + 0x10)) {
    FUN_18018488e(puVar3,*(longlong *)(lVar4 + 0x30) - *(longlong *)(lVar4 + 0x28) >> 2);
    puVar1 = *(undefined4 **)(lVar4 + 0x30);
    for (puVar5 = *(undefined4 **)(lVar4 + 0x28); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      local_58 = *puVar5;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802398e0();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,local_98,&local_58);
      FUN_1801859da(puVar3,local_98);
      FUN_18017fb46(local_70);
      FUN_180001ef2(local_90);
    }
  }
  return local_50;
}

