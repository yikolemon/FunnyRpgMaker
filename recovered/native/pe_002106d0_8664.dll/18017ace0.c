/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ace0 */

undefined8 FUN_18017ace0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  
  param_1[0x909] = -0x100000000;
  *(undefined1 *)(param_1 + 0x905) = 0xff;
  cVar2 = FUN_18017c060();
  if (cVar2 == -0x28) {
    uVar5 = 1;
    if (param_2 == 0) {
      bVar3 = FUN_18017c060(param_1);
      if (bVar3 != 0xc2 && (bVar3 & 0xfe) != 0xc0) {
        do {
          iVar4 = FUN_18017c0fe(param_1);
          if (iVar4 == 0) {
            return 0;
          }
LAB_18017ad51:
          bVar3 = FUN_18017c060(param_1);
          if (bVar3 == 0xff) {
            lVar1 = *param_1;
            if (*(longlong *)(lVar1 + 0x10) != 0) goto code_r0x00018017ad67;
            goto LAB_18017ad78;
          }
        } while ((bVar3 != 0xc2) && ((bVar3 & 0xfe) != 0xc0));
      }
      *(uint *)(param_1 + 0x906) = (uint)(bVar3 == 0xc2);
      uVar5 = FUN_18017c6ce(param_1);
      return uVar5;
    }
  }
  else {
    FUN_1801765d0("no SOI");
    uVar5 = 0;
  }
  return uVar5;
code_r0x00018017ad67:
  iVar4 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x28));
  if (iVar4 != 0) {
    if (*(int *)(lVar1 + 0x30) != 0) {
LAB_18017ad78:
      if (*(ulonglong *)(lVar1 + 0xc0) < *(ulonglong *)(lVar1 + 200)) goto LAB_18017ad51;
    }
    FUN_1801765d0("no SOF");
    return 0;
  }
  goto LAB_18017ad51;
}

