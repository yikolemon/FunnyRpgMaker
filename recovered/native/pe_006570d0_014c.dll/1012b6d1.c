/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b6d1 */

void __fastcall FUN_1012b6d1(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  ulonglong local_1c;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  if (*(int *)(DAT_1039d74c + 0xcf8) == 0) {
    local_1c = 0;
    local_30 = *(float *)(param_1 + 0x38);
    fVar3 = (float10)FUN_101155f9();
    local_2c = (float)fVar3;
    local_24 = CONCAT44(local_30 + local_2c,*(undefined4 *)(param_1 + 0x34));
  }
  else {
    local_1c = (ulonglong)DAT_1028b430;
    fVar3 = (float10)FUN_101155f9();
    local_28 = (float)fVar3;
    local_24 = CONCAT44(local_28 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20),
                        *(float *)(param_1 + 0x3c) + (float)*(undefined8 *)(param_1 + 0x34));
  }
  FUN_10111d56(&local_24,1,&local_1c);
  cVar2 = FUN_10116736("#WindowMenu",0);
  if (cVar2 == '\0') {
    if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 2;
    (**(code **)(iVar1 + 0x26c4))(iVar1,param_1,param_2);
    if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
      FUN_101165cb();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

