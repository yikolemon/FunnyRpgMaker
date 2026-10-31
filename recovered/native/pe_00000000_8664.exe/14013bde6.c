/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013bde6 */

uint FUN_14013bde6(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = FUN_14012c249(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 8),&DAT_140ec386a);
  if (lVar5 == 0) {
    uVar4 = 0xb;
  }
  else {
    uVar4 = FUN_14012d612(param_1,0);
    if ((uVar4 == 0) &&
       (uVar4 = (**(code **)(lVar5 + 8))(param_1,param_2,param_3,param_4,param_5), uVar4 == 0)) {
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      iVar1 = *(int *)(param_2 + 0xf0);
      if (iVar1 < 0x10000) {
        if ((iVar1 != -0x5a949d9c) && (iVar1 != -0x5a938c8c)) {
          return 2;
        }
      }
      else if (((iVar1 != 0x10000) && (iVar1 != 0x74727565)) && (iVar1 != 0x20000)) {
        return 2;
      }
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 8;
      if ((int)param_3 < 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(lVar5 + 0x10))(uVar2,param_2,param_3,param_4,param_5);
        if (uVar4 == 0) {
          cVar3 = FUN_14014880e(param_2);
          if (cVar3 != '\0') {
            *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x20;
          }
          uVar4 = FUN_140148846(param_2,uVar2);
          if (uVar4 == 0) {
            if ((*(uint *)(param_2 + 8) & 0x20001) == 0) {
              uVar4 = 0;
            }
            else {
              if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
                uVar4 = FUN_140148a1e(param_2,uVar2);
                if (*(int *)(param_2 + 0x3f8) != 0 && (uVar4 & 0xff) == 0x8e) {
                  return uVar4;
                }
                if (*(int *)(param_2 + 0x3f8) == 0 && (uVar4 & 0xff) == 0x90) {
                  return 2;
                }
                if (uVar4 != 0) {
                  return uVar4;
                }
              }
              uVar4 = FUN_1401420f7(param_2,uVar2);
              if ((uVar4 != 0) && ((uVar4 & 0xff) != 0x8e)) {
                return uVar4;
              }
              uVar4 = FUN_140148bc4(param_2,uVar2);
              if ((uVar4 != 0) && ((uVar4 & 0xff) != 0x8e)) {
                return uVar4;
              }
              uVar4 = FUN_140148c54(param_2,uVar2);
              if ((uVar4 != 0) && ((uVar4 & 0xff) != 0x8e)) {
                return uVar4;
              }
              if ((((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
                   (*(int *)(param_2 + 0x28) != 0)) && (*(longlong *)(param_2 + 0x440) != 0)) &&
                 (cVar3 = FUN_140148ce4(param_2), cVar3 != '\0')) {
                *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
              }
            }
            if ((param_3 >> 0x10 != 0) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
              uVar4 = FUN_1401841ab(param_2,param_3 >> 0x10);
              if (uVar4 != 0) {
                return uVar4;
              }
              uVar4 = 0;
            }
            FUN_140148de8(param_2);
          }
        }
      }
    }
  }
  return uVar4;
}

