/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327d6a */

undefined8 FUN_140327d6a(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = DAT_14062a630;
  if ((param_1 & 0xffffcf40) != 0) {
    FUN_140312b68(
                 "alSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                 );
  }
  lVar1 = *(longlong *)(lVar2 + 0x1610);
  if (lVar1 == 0) {
    return 0;
  }
  if ((param_1 & 4) == 0) {
    lVar4 = *(longlong *)(lVar2 + 0x1608);
    if ((param_1 & 2) != 0) {
      lVar4 = FUN_140327d04(lVar4,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
    }
    if ((param_1 & 1) == 0) {
      if (lVar1 != lVar4) {
        return 0;
      }
    }
    else {
      cVar3 = FUN_140327cb8(lVar1,lVar4,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  cVar3 = FUN_1403189b6(lVar1,param_1);
  if ((cVar3 != '\0') &&
     (((((char)param_1 < '\0' || (*(int *)(lVar2 + 0x167c) == 0)) ||
       (*(char *)(lVar2 + 0x1689) != '\0')) || (*(int *)(lVar2 + 0x167c) == *(int *)(lVar1 + 0xc4)))
     )) {
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_140318cbf(param_1,*(undefined4 *)(lVar2 + 0x12e4));
    }
    if (((param_1 >> 0xd & 1) == 0) || (*(int *)(lVar2 + 0x2694) == *(int *)(lVar1 + 0x10))) {
      return 1;
    }
  }
  return 0;
}

