/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179fb0 */

void FUN_180179fb0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    puVar2 = *(undefined1 **)(param_1 + 0xc0);
    if (puVar2 < *(undefined1 **)(param_1 + 200)) {
LAB_180179ff3:
      *(undefined1 **)(param_1 + 0xc0) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        puVar2 = *(undefined1 **)(param_1 + 0xc0);
        goto LAB_180179ff3;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 2 + uVar3 * 4) = uVar1;
    puVar2 = *(undefined1 **)(param_1 + 0xc0);
    if (puVar2 < *(undefined1 **)(param_1 + 200)) {
LAB_18017a02a:
      *(undefined1 **)(param_1 + 0xc0) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        puVar2 = *(undefined1 **)(param_1 + 0xc0);
        goto LAB_18017a02a;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 1 + uVar3 * 4) = uVar1;
    puVar2 = *(undefined1 **)(param_1 + 0xc0);
    if (puVar2 < *(undefined1 **)(param_1 + 200)) {
LAB_18017a061:
      *(undefined1 **)(param_1 + 0xc0) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        puVar2 = *(undefined1 **)(param_1 + 0xc0);
        goto LAB_18017a061;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + uVar3 * 4) = uVar1;
    *(char *)(param_2 + 3 + uVar3 * 4) = -(param_4 != uVar3);
    uVar3 = uVar3 + 1;
    if (param_3 == uVar3) {
      return;
    }
  } while( true );
}

