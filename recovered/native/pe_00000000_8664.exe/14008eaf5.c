/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008eaf5 */

void FUN_14008eaf5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  lVar2 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(DAT_140f2a910 + 0x2a40) == '\x01') {
    lVar1 = DAT_140f2a910 + 0x2a58;
    local_38 = &local_res10;
    if (*(longlong *)(DAT_140f2a910 + 0x2a50) == 0) {
      FUN_14007940a(lVar1,param_1,&local_res10);
    }
    else {
      if (*(int *)(DAT_140f2a910 + 0x2a5c) < 0) {
        uVar3 = FUN_140077ab4(0);
        if (*(longlong *)(lVar2 + 0x2a60) != 0) {
          FUN_1401c5180(uVar3,*(longlong *)(lVar2 + 0x2a60),(longlong)*(int *)(lVar2 + 0x2a58));
          FUN_140077b90(*(undefined8 *)(lVar2 + 0x2a60));
        }
        *(undefined8 *)(lVar2 + 0x2a60) = uVar3;
        *(undefined4 *)(lVar2 + 0x2a5c) = 0;
      }
      *(undefined4 *)(lVar2 + 0x2a58) = 0;
      FUN_14007940a(lVar1,param_1,&local_res10);
      puVar4 = &DAT_140f2a918;
      if (*(undefined **)(lVar2 + 0x2a60) != (undefined *)0x0) {
        puVar4 = *(undefined **)(lVar2 + 0x2a60);
      }
      thunk_FUN_1401a4ca4(puVar4,1,(longlong)
                                   (int)(*(int *)(lVar2 + 0x2a58) + -1 +
                                        (uint)(*(int *)(lVar2 + 0x2a58) == 0)),
                          *(undefined8 *)(lVar2 + 0x2a50));
    }
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

