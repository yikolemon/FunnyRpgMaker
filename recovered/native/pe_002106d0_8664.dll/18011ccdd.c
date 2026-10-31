/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011ccdd */

undefined8 FUN_18011ccdd(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_180419160;
  if ((((*(char *)(DAT_180419160 + 0x2428) == '\x01') &&
       (*(longlong *)(DAT_180419160 + 0x1618) != 0)) &&
      (lVar1 = *(longlong *)(DAT_180419160 + 0x1608),
      *(longlong *)(lVar1 + 0x428) == *(longlong *)(*(longlong *)(DAT_180419160 + 0x1618) + 0x428)))
     && (((cVar4 = FUN_180107af4(param_1,param_1 + 1,1), cVar4 != '\0' &&
          (param_2 != *(int *)(lVar3 + 0x2444))) && (*(char *)(lVar1 + 0x10e) == '\0')))) {
    uVar2 = param_1[1];
    *(undefined8 *)(lVar3 + 0x2478) = *param_1;
    *(undefined8 *)(lVar3 + 0x2480) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x2c0);
    *(undefined8 *)(lVar3 + 0x2488) = *(undefined8 *)(lVar1 + 0x2b8);
    *(undefined8 *)(lVar3 + 0x2490) = uVar2;
    *(int *)(lVar3 + 0x2498) = param_2;
    *(undefined4 *)(lVar3 + 0x249c) = 0;
    *(undefined1 *)(lVar3 + 0x242a) = 1;
    return 1;
  }
  return 0;
}

