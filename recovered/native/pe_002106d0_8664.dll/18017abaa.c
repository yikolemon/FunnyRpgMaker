/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017abaa */

longlong FUN_18017abaa(longlong param_1,uint param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0x80;
  lVar5 = 0;
  do {
    if ((uVar4 & param_2) != 0) {
      if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017abe0:
        puVar3 = *(undefined1 **)(param_1 + 0xc0);
        if (*(undefined1 **)(param_1 + 200) <= puVar3) {
LAB_18017ac39:
          FUN_1801765d0("bad file");
          return 0;
        }
LAB_18017abf0:
        *(undefined1 **)(param_1 + 0xc0) = puVar3 + 1;
        uVar1 = *puVar3;
      }
      else {
        iVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_18017ac39;
          goto LAB_18017abe0;
        }
        puVar3 = *(undefined1 **)(param_1 + 0xc0);
        if (puVar3 < *(undefined1 **)(param_1 + 200)) goto LAB_18017abf0;
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_180176673(param_1);
          puVar3 = *(undefined1 **)(param_1 + 0xc0);
          goto LAB_18017abf0;
        }
        uVar1 = 0;
      }
      *(undefined1 *)(param_3 + lVar5) = uVar1;
    }
    lVar5 = lVar5 + 1;
    uVar4 = uVar4 >> 1;
    if (lVar5 == 4) {
      return param_3;
    }
  } while( true );
}

