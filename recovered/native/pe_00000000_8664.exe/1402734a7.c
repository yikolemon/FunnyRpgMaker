/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402734a7 */

void FUN_1402734a7(undefined8 ***param_1)

{
  char cVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_b8 [16];
  char *local_a8;
  char *local_a0;
  longlong local_90;
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_140255e50(&DAT_140628db0);
  cVar1 = FUN_1402739e0(&DAT_140628ea0,param_1);
  if (cVar1 == '\0') {
    FUN_140273a5a(&DAT_140628e60,&local_90,param_1);
    if (local_90 == DAT_140628e68) {
      local_68 = (undefined8 **)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 3;
      pppuVar2 = param_1;
      if ((undefined8 **)0xf < param_1[3]) {
        pppuVar2 = (undefined8 ***)*param_1;
      }
      FUN_140274e9f(&local_88,pppuVar2,(longlong)param_1[2] + (longlong)pppuVar2,&local_68);
      FUN_140273ae6(&local_a8,&local_68);
      FUN_140272f88(&local_68);
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 3;
      for (pcVar4 = local_a8; pcVar4 != local_a0; pcVar4 = pcVar4 + 0x28) {
        if (*pcVar4 == '\x01') {
          FUN_140273d30(&DAT_140628e30,&local_88,pcVar4 + 8);
          FUN_14027448c(pcVar4 + 8,&local_88);
          FUN_140272f88(&local_88);
        }
        if (*(ulonglong *)(pcVar4 + 0x20) < 4) {
          pcVar3 = pcVar4 + 8;
        }
        else {
          pcVar3 = *(char **)(pcVar4 + 8);
        }
        FUN_140274cdc(&local_68,pcVar3,*(undefined8 *)(pcVar4 + 0x18));
      }
      local_88 = (undefined8 ***)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      pppuVar2 = &local_68;
      if (3 < local_50) {
        pppuVar2 = (undefined8 ***)local_68;
      }
      FUN_140277b2b(local_b8,pppuVar2,(longlong)pppuVar2 + local_58 * 4,&local_88);
      FUN_1402744e6(&DAT_140628e60,local_b8,param_1,&local_88);
      FUN_1402744e6(&DAT_140628ea0,local_b8,&local_88,param_1);
      if (param_1 != &local_88) {
        pppuVar2 = &local_88;
        if (0xf < local_70) {
          pppuVar2 = (undefined8 ***)local_88;
        }
        FUN_140229170(param_1,pppuVar2,local_78);
      }
      FUN_1402133c2(&local_88);
      FUN_140272f88(&local_68);
      FUN_140272ec4(&local_a8);
    }
    else {
      pppuVar2 = (undefined8 ***)(local_90 + 0x30);
      if (param_1 != pppuVar2) {
        if (0xf < *(ulonglong *)(local_90 + 0x48)) {
          pppuVar2 = *(undefined8 ****)(local_90 + 0x30);
        }
        FUN_140229170(param_1,pppuVar2,*(undefined8 *)(local_90 + 0x40));
      }
    }
  }
  FUN_14044ebb0(&DAT_140628db0);
  return;
}

