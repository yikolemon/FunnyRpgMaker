/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003314b */

undefined8 FUN_1003314b(int *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  int iStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  uint local_14;
  
  uVar4 = CONCAT44(param_2,param_1);
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  FUN_1003325a(0x22);
  local_30 = param_3 + param_4;
  do {
    param_2 = (int)((ulonglong)uVar4 >> 0x20);
    param_1 = (int *)uVar4;
    local_1c = (undefined1 *)0x0;
    local_18 = 0;
    local_20 = local_30;
    FUN_10032bef(param_3,(int)local_30 - (int)param_3,&local_20);
    local_2c = local_20;
    if (param_3 != local_20) {
      do {
        if (param_2 == 0) {
          param_2 = 0;
        }
        else {
          uVar1 = *param_3;
          iVar2 = param_1[1];
          uVar3 = iVar2 + 1;
          if ((uint)param_1[2] < uVar3) {
            (*(code *)param_1[3])();
            iVar2 = param_1[1];
            uVar3 = iVar2 + 1;
          }
          param_1[1] = uVar3;
          *(undefined1 *)(*param_1 + iVar2) = uVar1;
          param_2 = param_2 + -1;
        }
        param_3 = param_3 + 1;
      } while (param_3 != local_2c);
    }
    param_3 = local_1c;
    uVar4 = CONCAT44(param_2,param_1);
    if (local_1c == (undefined1 *)0x0) break;
    local_28 = param_1;
    iStack_24 = param_2;
    uVar4 = FUN_10033297(CONCAT44(param_2,param_1),&local_20);
  } while (param_3 != local_30);
  FUN_1003325a(0x22);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

