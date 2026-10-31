/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019f68 */

undefined8 FUN_140019f68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  longlong lVar3;
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 **local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
    local_40 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
    lVar3 = *(longlong *)(param_1 + 0x1b8);
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    if (lVar3 != lVar1) {
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0xa8) {
        FUN_14001a0c2(lVar3,local_80);
        if (local_70 != 0) {
          FUN_140006fbc(local_60,&DAT_140170ae9,local_80);
          pppuVar2 = local_60;
          if (0xf < local_48) {
            pppuVar2 = (undefined8 ***)local_60[0];
          }
          FUN_14000b1f8(local_40,pppuVar2,local_50);
          FUN_1400017de(local_60);
        }
        FUN_1400017de(local_80);
      }
    }
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9e50();
}

