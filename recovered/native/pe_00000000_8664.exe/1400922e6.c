/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400922e6 */

void FUN_1400922e6(undefined8 param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_35 [5];
  ulonglong local_30;
  
  lVar4 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  switch(*param_2) {
  case 1:
    fVar2 = (float)param_2[3];
    if (fVar2 == DAT_1402112e0) {
      if (((float)param_2[4] == DAT_1402112e0) && (!NAN((float)param_2[4]) && !NAN(DAT_1402112e0)))
      {
        if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) != 0) {
          FUN_1400772a6("[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n",param_1);
        }
        break;
      }
    }
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) == 0) break;
    local_48 = FUN_1400a2c79(param_2[5]);
    fVar1 = (float)param_2[4];
    pcVar6 = "[io] %s: MousePos (%.1f, %.1f) (%s)\n";
    goto LAB_1400924c6;
  case 2:
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) == 0) break;
    local_48 = FUN_1400a2c79(param_2[5]);
    fVar1 = (float)param_2[4];
    fVar2 = (float)param_2[3];
    pcVar6 = "[io] %s: MouseWheel (%.3f, %.3f) (%s)\n";
LAB_1400924c6:
    FUN_1400772a6(pcVar6,param_1,(double)fVar2,(double)fVar1);
    break;
  case 3:
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) != 0) {
      local_48 = FUN_1400a2c79(param_2[5]);
      pcVar6 = "GamepadDpadUp";
      if (*(char *)(param_2 + 4) != '\0') {
        pcVar6 = "GamepadDpadDown";
      }
      FUN_1400772a6("[io] %s: MouseButton %d %s (%s)\n",param_1,param_2[3],pcVar6 + 0xb);
    }
    break;
  case 4:
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) == 0) break;
    uVar7 = param_2[3];
    pcVar6 = "[io] %s: MouseViewport (0x%08X)\n";
    goto LAB_140092496;
  case 5:
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) != 0) {
      pcVar6 = "GamepadDpadUp";
      if (*(char *)(param_2 + 4) != '\0') {
        pcVar6 = "GamepadDpadDown";
      }
      uVar5 = FUN_14009171d(param_2[3]);
      FUN_1400772a6("[io] %s: Key \"%s\" %s\n",param_1,uVar5,pcVar6 + 0xb);
    }
    break;
  case 6:
    uVar3 = param_2[3];
    FUN_1400783ac(local_35,uVar3);
    if ((*(byte *)(lVar4 + 0x2acc) & 0x80) != 0) {
      FUN_1400772a6("[io] %s: Text: \'%s\' (U+%08X)\n",param_1,local_35,uVar3);
    }
    break;
  case 7:
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 0x80) == 0) break;
    uVar7 = (uint)*(byte *)(param_2 + 3);
    pcVar6 = "[io] %s: AppFocused %d\n";
LAB_140092496:
    FUN_1400772a6(pcVar6,param_1,uVar7);
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

