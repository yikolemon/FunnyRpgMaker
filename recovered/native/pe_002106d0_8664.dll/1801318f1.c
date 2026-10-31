/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801318f1 */

void FUN_1801318f1(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar1 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (*(int *)(DAT_180419160 + 0xde0) == 0) {
    local_48 = 0;
    fVar3 = *(float *)(param_1 + 0x4c);
    fVar4 = (float)FUN_18011a456();
    local_50 = CONCAT44(fVar4 + fVar3,*(undefined4 *)(param_1 + 0x48));
  }
  else {
    local_48 = (ulonglong)DAT_1802ac570;
    fVar3 = (float)FUN_18011a456();
    local_50 = CONCAT44(fVar3 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                        *(float *)(param_1 + 0x50) + (float)*(undefined8 *)(param_1 + 0x48));
  }
  FUN_180116a8b(&local_50,1,&local_48);
  cVar2 = FUN_18011b56a("#WindowMenu",0);
  if (cVar2 == '\0') {
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 2;
    (**(code **)(lVar1 + 0x2968))(lVar1,param_1,param_2);
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_18011b3ef();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

