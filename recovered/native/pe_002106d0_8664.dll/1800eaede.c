/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eaede */

longlong * FUN_1800eaede(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  void *_Buf1;
  size_t _Size;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  lVar5 = (param_4 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar5);
  if (plVar4 != plVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar5);
    _Buf1 = (void *)*param_3;
    _Size = param_3[1];
    plVar3 = plVar4;
    while( true ) {
      if ((_Size == plVar3[3]) &&
         ((_Size == 0 || (iVar2 = memcmp(_Buf1,(void *)plVar3[2],_Size), iVar2 == 0)))) {
        plVar4 = (longlong *)*plVar3;
        goto LAB_1800eaf45;
      }
      if (plVar3 == plVar1) break;
      plVar3 = (longlong *)plVar3[1];
    }
  }
  plVar4 = plVar3;
  plVar3 = (longlong *)0x0;
LAB_1800eaf45:
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}

