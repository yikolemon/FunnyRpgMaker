/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003dc66 */

undefined4 FUN_14003dc66(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  iVar2 = FUN_140006e12(puVar4);
  if (iVar2 == 1) {
    local_2c = CONCAT31(local_2c._1_3_,param_3);
    FUN_14003e498(*(undefined8 *)(param_1 + 0x390),&local_48,param_2);
    for (; local_48 != local_40; local_48 = local_48 + 0x50) {
      cVar1 = FUN_14003fc0a(param_1,local_48,0);
      if (cVar1 == '\0' && *(char *)(param_1 + 0x49) == '\0') {
        FUN_140029f44(local_48,local_88);
        FUN_1400408e8(local_c8,local_88);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_c8,&DAT_14017a818);
      }
    }
    uVar3 = FUN_14001ee38(&local_48);
    local_2c = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    if (param_3 != '\0') {
      FUN_140006874(local_68,param_2);
      FUN_14003e5a6(local_108,local_68);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_108,&DAT_14017a7c8);
    }
    local_2c = 0;
  }
  return local_2c;
}

