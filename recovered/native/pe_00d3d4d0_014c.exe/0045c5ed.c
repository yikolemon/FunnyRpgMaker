/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045c5ed */

void __cdecl FUN_0045c5ed(uint *param_1,undefined8 *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  uint local_34;
  uint local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_34;
  *param_4 = -1;
  FUN_0045c4aa(param_1,&local_20);
  if (local_18 == 3) {
    local_30 = *param_1;
    local_34 = param_1[2];
    *param_1 = local_20 + 1U;
    param_1[2] = local_1c - 1U;
    puVar1 = param_2;
    if (local_20 + 1U < local_1c - 1U) {
      do {
        FUN_0045c4aa(param_1,(undefined4 *)&local_2c);
        if (local_24 == 0) break;
        if (puVar1 < (undefined8 *)((int)param_2 + param_3 * 0xc) && param_2 != (undefined8 *)0x0) {
          *(int *)(puVar1 + 1) = local_24;
          *puVar1 = local_2c;
        }
        puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      } while (*param_1 < param_1[2]);
    }
    *param_4 = ((int)puVar1 - (int)param_2 >> 2) * -0x55555555;
    *param_1 = local_30;
    param_1[2] = local_34;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_34);
}

