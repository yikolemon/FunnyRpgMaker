/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006a32c */

undefined8 FUN_14006a32c(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_b8 [56];
  undefined1 local_80 [32];
  longlong local_60;
  ulonglong local_58;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_29 = FUN_14006a94a(param_1 + 0x70,
                           (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8))
                           >> 3,2,param_1 + 0xb8);
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  local_60 = ((longlong)uVar5 >> 0x3f & 0xe000000000000000U) +
             (uVar5 >> 5) * 4 + *(longlong *)(param_1 + 0x20);
  local_58 = (ulonglong)((uint)uVar5 & 0x1f);
  FUN_140069730(param_1 + 0x20,local_80,&local_60,1,&local_29);
  local_60 = CONCAT71(local_60._1_7_,2);
  FUN_14006a9ac(param_1,local_40,&local_60,1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
    FUN_1400322a6(param_1 + 8,puVar2,&local_38);
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  else {
    *puVar2 = local_38;
    lVar4 = *(longlong *)(param_1 + 0x10) + 8;
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if ((param_2 != 0xffffffffffffffff) && (*(char **)(lVar4 + -8) != (char *)0x0)) {
    cVar1 = **(char **)(lVar4 + -8);
    if (cVar1 == '\x02') {
      uVar5 = 0xfffffffffffffff;
    }
    else if (cVar1 == '\x01') {
      uVar5 = 0x555555555555555;
    }
    else {
      uVar5 = FUN_14006aefc();
    }
    if (uVar5 < param_2) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
      FUN_14001943c(local_80,param_2);
      FUN_14006acb2(&local_60,"excessive array size: ",local_80);
      FUN_14006a658(local_b8,0x198,&local_60,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_b8,&DAT_140196680);
    }
  }
  return 1;
}

