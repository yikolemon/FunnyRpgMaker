/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d7d8 */

void FUN_14005d7d8(longlong param_1,longlong param_2,longlong param_3,longlong param_4,byte param_5)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != 0 && param_2 != param_3) {
    do {
      switch(*(undefined4 *)(param_2 + 8)) {
      case 7:
        if (param_4 == 0) {
LAB_14005d8e5:
          param_4 = 0;
        }
        else if ((((*(longlong *)(param_2 + 0x20) != 0) &&
                  ((((*(longlong *)(param_2 + 0x28) != 0 || (*(longlong *)(param_2 + 0x30) != 0)) ||
                    (*(longlong *)(param_2 + 0x38) != 0)) ||
                   ((*(short *)(param_2 + 0x40) != 0 ||
                    (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18) != 0)))))) ||
                 (*(longlong *)(param_2 + 0x48) != 0)) ||
                (((*(byte *)(param_1 + 0x69) & 8) != 0 &&
                 ((*(longlong *)(param_2 + 0x38) != 0 || ((*(byte *)(param_2 + 0xc) & 1) != 0))))))
        {
          *(undefined4 *)(param_4 + 0x34) = 0;
          goto LAB_14005d91f;
        }
        break;
      case 10:
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
      case 0xb:
        FUN_14005d7d8(param_1,*(undefined8 *)(param_2 + 0x20),0,0,1);
        break;
      case 0xf:
        if ((param_5 == 0) && (param_4 != 0)) {
LAB_14005d91f:
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
        break;
      case 0x10:
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
        for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28))
        {
          FUN_14005d7d8(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x20),param_4,
                        param_5);
        }
        break;
      case 0x12:
        if (param_4 == 0) {
          *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x10;
          param_4 = param_2;
        }
        else {
          *(undefined4 *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
          *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x10;
          bVar1 = *(uint *)(param_4 + 0x24) < 2 & param_5;
          if (bVar1 == 0) {
            *(undefined4 *)(param_2 + 0x34) = 0;
          }
          FUN_14005d7d8(param_1,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),param_2,bVar1);
          param_2 = *(longlong *)(param_2 + 0x28);
        }
        break;
      case 0x13:
        if (param_4 == *(longlong *)(param_2 + 0x20)) {
          if (*(int *)(param_4 + 0x34) == -1) {
            *(undefined4 *)(param_4 + 0x34) = 1;
          }
          goto LAB_14005d8e5;
        }
      }
      param_2 = *(longlong *)(param_2 + 0x10);
    } while ((param_2 != param_3) && (param_2 != 0));
  }
  return;
}

