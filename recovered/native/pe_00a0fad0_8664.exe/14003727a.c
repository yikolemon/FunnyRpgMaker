/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003727a */

longlong FUN_14003727a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar4 = *(longlong **)(param_1 + 0x300);
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != plVar1) {
    do {
      lVar3 = *plVar4;
      if (((char)param_3 == '\0') || (*(char *)(lVar3 + 0x4d) == '\0')) {
        if (*(longlong *)(lVar3 + 0x18) == 0) {
          lVar3 = FUN_14003727a(lVar3,param_2,param_3,param_4);
          if (lVar3 != 0) {
            return lVar3;
          }
          lVar3 = *plVar4;
        }
        FUN_140006874(local_68,param_2);
        cVar2 = FUN_14003736c(lVar3,local_68);
        if (cVar2 != '\0') {
          lVar3 = *plVar4;
          if ((char)param_4 == '\0') {
            return lVar3;
          }
          if (*(int *)(lVar3 + 0x324) == 0) {
            return lVar3;
          }
        }
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar1);
  }
  return 0;
}

