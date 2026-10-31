/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008775e */

undefined8 FUN_18008775e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar2 + -8) == 0) {
    *(longlong *)(param_1 + 0x10) = lVar2 + -8;
    FUN_18005258c(param_1 + 0x20);
  }
  else {
    cVar4 = FUN_18005262c(param_1 + 0x70,
                          (int)((ulonglong)(lVar2 - *(longlong *)(param_1 + 8)) >> 3) + -1,3);
    if (cVar4 == '\0') {
      FUN_180087b9a(local_28,param_1 + 0xb8);
      FUN_1800856c4(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),local_28);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      FUN_18005258c(param_1 + 0x20);
      if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) &&
         (pcVar3 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), *pcVar3 == '\x02')) {
        lVar2 = *(longlong *)(pcVar3 + 8);
        FUN_18007ff6e(*(longlong *)(lVar2 + 8) + -0x10);
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -0x10;
      }
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      FUN_18005258c(param_1 + 0x20);
    }
  }
  return 1;
}

