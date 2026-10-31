/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140326cad */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140326cad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar2 = DAT_14062a630;
  local_30 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(DAT_14062a630 + 0x2a40) == '\x01') {
    lVar1 = DAT_14062a630 + 0x2a58;
    local_38 = &local_res10;
    if (*(longlong *)(DAT_14062a630 + 0x2a50) == 0) {
      FUN_14031161e(lVar1,param_1,&local_res10);
    }
    else {
      if (*(int *)(DAT_14062a630 + 0x2a5c) < 0) {
        uVar3 = FUN_14030fcc8(0);
        if (*(longlong *)(lVar2 + 0x2a60) != 0) {
          FUN_1404b97c0(uVar3,*(longlong *)(lVar2 + 0x2a60),(longlong)*(int *)(lVar2 + 0x2a58));
          FUN_14030fda4(*(undefined8 *)(lVar2 + 0x2a60));
        }
        *(undefined8 *)(lVar2 + 0x2a60) = uVar3;
        *(undefined4 *)(lVar2 + 0x2a5c) = 0;
      }
      *(undefined4 *)(lVar2 + 0x2a58) = 0;
      FUN_14031161e(lVar1,param_1,&local_res10);
      puVar4 = &DAT_14062a638;
      if (*(undefined **)(lVar2 + 0x2a60) != (undefined *)0x0) {
        puVar4 = *(undefined **)(lVar2 + 0x2a60);
      }
      thunk_FUN_140497f34(puVar4,1,(longlong)
                                   (int)(*(int *)(lVar2 + 0x2a58) + -1 +
                                        (uint)(*(int *)(lVar2 + 0x2a58) == 0)),
                          *(undefined8 *)(lVar2 + 0x2a50));
    }
  }
  if (ram0x000140613b10 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_30 ^ (ulonglong)auStack_58);
}

