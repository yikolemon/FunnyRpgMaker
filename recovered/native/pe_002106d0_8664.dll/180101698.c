/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101698 */

undefined1 FUN_180101698(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(char *)(DAT_180419160 + 0xb2) == '\x01') {
    if (*(char *)(DAT_180419160 + 0x2aa0) == '\x01') {
      if ((*(byte *)(DAT_180419160 + 0x2acc) & 1) == 0) {
        *(int *)(DAT_180419160 + 11000) = *(int *)(DAT_180419160 + 11000) + 1;
      }
      else {
        FUN_1800fdfea("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n",
                      *(undefined1 *)(DAT_180419160 + 0xb1),1,*(undefined1 *)(DAT_180419160 + 0xb3))
        ;
      }
    }
    if ((*(byte *)(lVar2 + 0x2acc) & 1) == 0) {
      *(int *)(lVar2 + 11000) = *(int *)(lVar2 + 11000) + 1;
    }
    else {
      if (lVar1 == 0) {
        pcVar6 = "NULL";
      }
      else {
        pcVar6 = *(char **)(lVar1 + 8);
      }
      FUN_1800fdfea("[imgui-error] In window \'%s\': %s\n",pcVar6,param_1);
    }
  }
  *(undefined1 *)(lVar2 + 0x2aa0) = 0;
  if (*(char *)(lVar2 + 0xb3) == '\x01') {
    if (*(char *)(lVar2 + 1) == '\x01') {
      cVar3 = FUN_180119733();
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0x2aa4);
        if (iVar4 < 0x14) {
          if (lVar1 == 0) {
            FUN_1801330a5("In window \'%s\': %s","NULL",param_1);
          }
          else {
            FUN_1801330a5("In window \'%s\': %s",*(undefined8 *)(lVar1 + 8),param_1);
            if ((*(char *)(lVar1 + 0x112) != '\x01') || (*(char *)(lVar1 + 0x10a) == '\x01')) {
              uVar5 = FUN_180103228();
              local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x68) >> 0x20) +
                                  (float)((ulonglong)*(undefined8 *)(lVar1 + 0x60) >> 0x20),
                                  (float)*(undefined8 *)(lVar1 + 0x68) +
                                  (float)*(undefined8 *)(lVar1 + 0x60));
              local_38 = 0;
              local_48 = 0;
              local_40 = 0x3f800000;
              FUN_180192c0a(uVar5,lVar1 + 0x60,&local_28,0xff0000ff);
            }
          }
          iVar4 = *(int *)(lVar2 + 0x2aa4);
        }
        if (iVar4 == 0x14) {
          FUN_1801330a5("(and more errors)");
        }
        thunk_FUN_18010f900();
      }
    }
    *(int *)(lVar2 + 0x2aa4) = *(int *)(lVar2 + 0x2aa4) + 1;
  }
  if (*(code **)(lVar2 + 0x2a88) != (code *)0x0) {
    (**(code **)(lVar2 + 0x2a88))(lVar2,*(undefined8 *)(lVar2 + 0x2a90),param_1);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return *(undefined1 *)(lVar2 + 0xb1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

