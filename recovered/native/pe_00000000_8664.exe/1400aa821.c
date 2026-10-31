/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aa821 */

void FUN_1400aa821(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar1 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (*(int *)(DAT_140f2a910 + 0xde0) == 0) {
    local_48 = 0;
    fVar3 = *(float *)(param_1 + 0x4c);
    fVar4 = (float)FUN_14009376e();
    local_50 = CONCAT44(fVar4 + fVar3,*(undefined4 *)(param_1 + 0x48));
  }
  else {
    local_48 = (ulonglong)DAT_1401c86c8;
    fVar3 = (float)FUN_14009376e();
    local_50 = CONCAT44(fVar3 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                        *(float *)(param_1 + 0x50) + (float)*(undefined8 *)(param_1 + 0x48));
  }
  FUN_14008fda3(&local_50,1,&local_48);
  cVar2 = FUN_140094826("#WindowMenu",0);
  if (cVar2 == '\0') {
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 2;
    (**(code **)(lVar1 + 0x2968))(lVar1,param_1,param_2);
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_1400946ab();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

