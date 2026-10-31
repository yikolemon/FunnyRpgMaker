/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180061fd7 */

void FUN_180061fd7(undefined8 ***param_1)

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
  FUN_180044980(&DAT_1804178e0);
  cVar1 = FUN_180062510(&DAT_1804179d0,param_1);
  if (cVar1 == '\0') {
    FUN_18006258a(&DAT_180417990,&local_90,param_1);
    if (local_90 == DAT_180417998) {
      local_68 = (undefined8 **)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 3;
      pppuVar2 = param_1;
      if ((undefined8 **)0xf < param_1[3]) {
        pppuVar2 = (undefined8 ***)*param_1;
      }
      FUN_1800639cf(&local_88,pppuVar2,(longlong)param_1[2] + (longlong)pppuVar2,&local_68);
      FUN_180062616(&local_a8,&local_68);
      FUN_180061ab8(&local_68);
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 3;
      for (pcVar4 = local_a8; pcVar4 != local_a0; pcVar4 = pcVar4 + 0x28) {
        if (*pcVar4 == '\x01') {
          FUN_180062860(&DAT_180417960,&local_88,pcVar4 + 8);
          FUN_180062fbc(pcVar4 + 8,&local_88);
          FUN_180061ab8(&local_88);
        }
        if (*(ulonglong *)(pcVar4 + 0x20) < 4) {
          pcVar3 = pcVar4 + 8;
        }
        else {
          pcVar3 = *(char **)(pcVar4 + 8);
        }
        FUN_18006380c(&local_68,pcVar3,*(undefined8 *)(pcVar4 + 0x18));
      }
      local_88 = (undefined8 ***)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      pppuVar2 = &local_68;
      if (3 < local_50) {
        pppuVar2 = (undefined8 ***)local_68;
      }
      FUN_18006665b(local_b8,pppuVar2,(longlong)pppuVar2 + local_58 * 4,&local_88);
      FUN_180063016(&DAT_180417990,local_b8,param_1,&local_88);
      FUN_180063016(&DAT_1804179d0,local_b8,&local_88,param_1);
      if (param_1 != &local_88) {
        pppuVar2 = &local_88;
        if (0xf < local_70) {
          pppuVar2 = (undefined8 ***)local_88;
        }
        FUN_180017ca0(param_1,pppuVar2,local_78);
      }
      FUN_180001ef2(&local_88);
      FUN_180061ab8(&local_68);
      FUN_1800619f4(&local_a8);
    }
    else {
      pppuVar2 = (undefined8 ***)(local_90 + 0x30);
      if (param_1 != pppuVar2) {
        if (0xf < *(ulonglong *)(local_90 + 0x48)) {
          pppuVar2 = *(undefined8 ****)(local_90 + 0x30);
        }
        FUN_180017ca0(param_1,pppuVar2,*(undefined8 *)(local_90 + 0x40));
      }
    }
  }
  FUN_18023d6e0(&DAT_1804178e0);
  return;
}

