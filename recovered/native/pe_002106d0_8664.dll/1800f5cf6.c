/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5cf6 */

ulonglong FUN_1800f5cf6(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  bool bVar1;
  uint *puVar2;
  ulonglong unaff_R14;
  undefined7 uVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_68;
  undefined8 local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = &LAB_1800f5fc8;
  local_78 = param_1;
  local_50 = param_3;
  FUN_1800f6036(&local_98,*param_3);
  do {
    uVar3 = (undefined7)(unaff_R14 >> 8);
    if (*(longlong *)(param_4 + 0x120) != 0) {
      unaff_R14 = CONCAT71(uVar3,1);
      break;
    }
    local_60 = *param_1;
    local_58 = 0;
    FUN_180044980();
    local_58 = '\x01';
    if ((*local_50 == 0) || (puVar2 = (uint *)FUN_1800188ac(*local_50 + 4), (*puVar2 & 1) == 0)) {
      local_68 = param_2;
      FUN_180021c7a(param_2);
      FUN_18023daa0(param_1 + 2,*param_1);
      FUN_180021c7a(&local_60);
      FUN_1800f6254(param_2);
      FUN_180044980(*param_2);
      *(undefined1 *)(param_2 + 1) = 1;
      bVar1 = false;
    }
    else {
      FUN_180021c7a(&local_60);
      unaff_R14 = CONCAT71(uVar3,*(longlong *)(param_4 + 0x120) != 0);
      bVar1 = true;
    }
    if (local_58 == '\x01') {
      FUN_18023d6e0(local_60);
    }
  } while (!bVar1);
  FUN_1800f627e(&local_98);
  FUN_1800f56b4(local_50);
  return unaff_R14 & 0xffffff01;
}

