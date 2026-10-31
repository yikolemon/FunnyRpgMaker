/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007eab1 */

void FUN_14007eab1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  int local_20;
  ushort local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1400a4807(param_4,"Pos=%i,%i",local_1c,&local_20);
  if (iVar1 == 2) {
    *(uint *)(param_3 + 4) = local_20 << 0x10 | (uint)local_1c[0];
  }
  else {
    iVar1 = FUN_1400a4807(param_4,"Size=%i,%i",local_1c,&local_20);
    if (iVar1 == 2) {
      *(uint *)(param_3 + 8) = local_20 << 0x10 | (uint)local_1c[0];
    }
    else {
      iVar1 = FUN_1400a4807(param_4,"ViewportId=0x%08X",&local_28);
      if (iVar1 == 1) {
        *(undefined4 *)(param_3 + 0x10) = local_28;
      }
      else {
        iVar1 = FUN_1400a4807(param_4,"ViewportPos=%i,%i",local_1c,&local_20);
        if (iVar1 == 2) {
          *(uint *)(param_3 + 0xc) = local_20 << 0x10 | (uint)local_1c[0];
        }
        else {
          iVar1 = FUN_1400a4807(param_4,"Collapsed=%d",&local_24);
          if (iVar1 == 1) {
            *(bool *)(param_3 + 0x1e) = local_24 != 0;
          }
          else {
            iVar1 = FUN_1400a4807(param_4,"IsChild=%d",&local_24);
            if (iVar1 == 1) {
              *(bool *)(param_3 + 0x1f) = local_24 != 0;
            }
            else {
              iVar1 = FUN_1400a4807(param_4,"DockId=0x%X,%d",&local_28,&local_24);
              if (iVar1 == 2) {
                *(undefined4 *)(param_3 + 0x14) = local_28;
                *(undefined2 *)(param_3 + 0x1c) = (undefined2)local_24;
              }
              else {
                iVar1 = FUN_1400a4807(param_4,"DockId=0x%X",&local_28);
                if (iVar1 == 1) {
                  *(undefined4 *)(param_3 + 0x14) = local_28;
                  *(undefined2 *)(param_3 + 0x1c) = 0xffff;
                }
                else {
                  iVar1 = FUN_1400a4807(param_4,"ClassId=0x%X",&local_28);
                  if (iVar1 == 1) {
                    *(undefined4 *)(param_3 + 0x18) = local_28;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

