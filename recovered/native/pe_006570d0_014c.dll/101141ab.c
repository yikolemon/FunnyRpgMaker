/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101141ab */

void __fastcall FUN_101141ab(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  float local_20 [3];
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)local_20;
  switch(*param_2) {
  case 1:
    if ((float)param_2[3] == DAT_102b89b0) {
      if (((float)param_2[4] == DAT_102b89b0) && (!NAN((float)param_2[4]) && !NAN(DAT_102b89b0))) {
        if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) != 0) {
          FUN_100f99e6();
        }
        goto switchD_101141d3_default;
      }
    }
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
    local_20[0] = (float)param_2[3];
    uVar4 = FUN_10124080();
    fVar1 = (float)param_2[4];
    pcVar6 = "[io] %s: MousePos (%.1f, %.1f) (%s)\n";
    fVar2 = local_20[0];
    break;
  case 2:
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
    uVar4 = FUN_10124080();
    fVar1 = (float)param_2[4];
    pcVar6 = "[io] %s: MouseWheel (%.3f, %.3f) (%s)\n";
    fVar2 = (float)param_2[3];
    break;
  case 3:
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) != 0) {
      uVar4 = FUN_10124080();
      pcVar6 = "GamepadDpadUp";
      if (*(char *)(param_2 + 4) != '\0') {
        pcVar6 = "GamepadDpadDown";
      }
      FUN_100f99e6("[io] %s: MouseButton %d %s (%s)\n",param_1,param_2[3],pcVar6 + 0xb,uVar4);
    }
    goto switchD_101141d3_default;
  case 4:
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
    uVar5 = param_2[3];
    pcVar6 = "[io] %s: MouseViewport (0x%08X)\n";
    goto LAB_1011433b;
  case 5:
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
    FUN_10113610(param_2[3]);
    goto LAB_1011431d;
  case 6:
    FUN_100faa51();
    if ((*(byte *)(iVar3 + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
LAB_1011431d:
    FUN_100f99e6();
    goto switchD_101141d3_default;
  case 7:
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 0x80) == 0) goto switchD_101141d3_default;
    uVar5 = (uint)*(byte *)(param_2 + 3);
    pcVar6 = "[io] %s: AppFocused %d\n";
LAB_1011433b:
    FUN_100f99e6(CONCAT44(param_1,pcVar6),uVar5);
  default:
    goto switchD_101141d3_default;
  }
  FUN_100f99e6(pcVar6,param_1,(double)fVar2,(double)fVar1,uVar4);
switchD_101141d3_default:
  if (DAT_10388d00 != (local_14 ^ (uint)local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

