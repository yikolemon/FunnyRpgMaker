/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400825b6 */

ulonglong FUN_1400825b6(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = 0xfffffffe;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      plVar1 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1bf0);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xfffffffc;
      }
      else {
        *(longlong **)(param_1 + 0x28) = plVar1;
        *plVar1 = param_1;
        plVar1[8] = 0;
        *(undefined4 *)(plVar1 + 1) = 0x3f34;
        uVar2 = FUN_140084148(param_1,param_2);
        if ((int)uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 0xffffffff;
          (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar1);
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
      }
    }
  }
  return uVar2;
}

