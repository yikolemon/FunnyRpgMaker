/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf949 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_101bf949(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *apiStack_138 [16];
  undefined1 uStack_f8;
  uint local_14;
  
  iVar5 = FUN_101bd5e3();
  if (*(int *)(iVar5 + 0x14) != 0) {
    return iVar5;
  }
  local_14 = DAT_10388d00 ^ (uint)apiStack_138;
  piVar2 = (int *)FUN_101bd5e3();
  iVar5 = 0;
  if (*piVar2 != 0) {
    FUN_101bf4e8();
    iVar5 = D3DCompile("cbuffer vertexBuffer : register(b0)             {              float4x4 ProjectionMatrix;             };            struct VS_INPUT            {              float2 pos : POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        struct PS_INPUT            {              float4 pos : SV_POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        PS_INPUT main(VS_INPUT input)            {              PS_INPUT output;              output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));              output.col = input.col;              output.uv  = input.uv;              return output;            }"
                       ,DAT_10302d50,0,0,0,&DAT_103360a4,"vs_4_0",0,0,apiStack_138 + 6,0);
    if (-1 < iVar5) {
      piVar1 = (int *)*piVar2;
      piVar9 = apiStack_138[6];
      uVar3 = (**(code **)(*apiStack_138[6] + 0x10))();
      piVar8 = apiStack_138[5];
      uVar4 = (**(code **)(*apiStack_138[5] + 0xc))();
      iVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,uVar4,uVar3,0,piVar2 + 5);
      if (iVar5 == 0) {
        ppuVar6 = &PTR_s_POSITION_1033c3b5_0xe_10302c90;
        ppiVar7 = apiStack_138;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar7 = (int *)*ppuVar6;
          ppuVar6 = ppuVar6 + 1;
          ppiVar7 = ppiVar7 + 1;
        }
        piVar1 = (int *)*piVar2;
        uVar3 = (**(code **)(*piVar9 + 0x10))(piVar9);
        uVar4 = (**(code **)(*piVar8 + 0xc))();
        iVar5 = (**(code **)(*piVar1 + 0x2c))(piVar1,apiStack_138,3,uVar4,uVar3,piVar2 + 6);
        (**(code **)(*piVar8 + 8))(piVar8);
        if (iVar5 == 0) {
          apiStack_138[5] = (int *)0x0;
          apiStack_138[0] = _DAT_10302d10;
          apiStack_138[1] = (int *)_UNK_10302d14;
          apiStack_138[2] = (int *)_UNK_10302d18;
          apiStack_138[3] = (int *)_UNK_10302d1c;
          apiStack_138[4] = (int *)0x0;
          (**(code **)(*(int *)*piVar2 + 0xc))((int *)*piVar2,apiStack_138,0,piVar2 + 7);
          iVar5 = D3DCompile("struct PS_INPUT            {            float4 pos : SV_POSITION;            float4 col : COLOR0;            float2 uv  : TEXCOORD0;            };            sampler sampler0;            Texture2D texture0;                        float4 main(PS_INPUT input) : SV_Target            {            float4 out_col = input.col * texture0.Sample(sampler0, input.uv);             return out_col;             }"
                             ,DAT_10302d54,0,0,0,&DAT_103360a4,"ps_4_0",0,0,apiStack_138,0);
          if (-1 < iVar5) {
            piVar1 = (int *)*piVar2;
            uVar3 = (**(code **)(*apiStack_138[7] + 0x10))(apiStack_138[7]);
            uVar4 = (**(code **)(*apiStack_138[6] + 0xc))(apiStack_138[6]);
            iVar5 = (**(code **)(*piVar1 + 0x3c))(piVar1,uVar4,uVar3,0,piVar2 + 8);
            (**(code **)(*apiStack_138[0] + 8))(apiStack_138[0]);
            if (iVar5 == 0) {
              ppiVar7 = apiStack_138 + 7;
              _memset(ppiVar7,0,0x108);
              apiStack_138[9] = (int *)_DAT_10302d20;
              apiStack_138[10] = (int *)_UNK_10302d24;
              apiStack_138[0xb] = (int *)_UNK_10302d28;
              apiStack_138[0xc] = (int *)_UNK_10302d2c;
              apiStack_138[0xd] = (int *)0x2;
              apiStack_138[0xe] = (int *)0x6;
              apiStack_138[0xf] = (int *)0x1;
              uStack_f8 = 0xf;
              (**(code **)(*(int *)*piVar2 + 0x50))((int *)*piVar2,ppiVar7,piVar2 + 0xc);
              apiStack_138[0xc] = (int *)0x0;
              apiStack_138[0xd] = (int *)0x0;
              apiStack_138[6] = (int *)0x0;
              apiStack_138[7] = (int *)0x0;
              apiStack_138[8] = (int *)0x0;
              apiStack_138[9] = (int *)0x0;
              apiStack_138[4] = (int *)0x3;
              apiStack_138[5] = (int *)0x1;
              apiStack_138[0xb] = (int *)0x1;
              apiStack_138[10] = (int *)0x1;
              (**(code **)(*(int *)*piVar2 + 0x58))((int *)*piVar2,ppiVar7,piVar2 + 0xb);
              apiStack_138[1] = (int *)0x0;
              apiStack_138[4] = (int *)0x0;
              apiStack_138[5] = (int *)0x0;
              apiStack_138[2] = (int *)0x1;
              apiStack_138[3] = (int *)0x8;
              apiStack_138[6] = (int *)_DAT_10302d30;
              apiStack_138[7] = (int *)_UNK_10302d34;
              apiStack_138[8] = (int *)_UNK_10302d38;
              apiStack_138[9] = (int *)_UNK_10302d3c;
              apiStack_138[10] = (int *)_DAT_10302d30;
              apiStack_138[0xb] = (int *)_UNK_10302d34;
              apiStack_138[0xc] = (int *)_UNK_10302d38;
              apiStack_138[0xd] = (int *)_UNK_10302d3c;
              (**(code **)(*(int *)*piVar2 + 0x54))((int *)*piVar2,ppiVar7,piVar2 + 0xd);
              apiStack_138[3] = (int *)0x0;
              apiStack_138[5] = (int *)0x0;
              apiStack_138[6] = (int *)0x0;
              apiStack_138[7] = (int *)0x0;
              apiStack_138[8] = (int *)0x0;
              apiStack_138[9] = (int *)0x0;
              apiStack_138[10] = (int *)0x0;
              apiStack_138[0] = _UNK_10302d48;
              apiStack_138[1] = (int *)_UNK_10302d4c;
              apiStack_138[2] = (int *)0x0;
              apiStack_138[4] = (int *)0x8;
              (**(code **)(*(int *)*piVar2 + 0x5c))((int *)*piVar2,ppiVar7,piVar2 + 9);
              (**(code **)(*(int *)*piVar2 + 0x5c))((int *)*piVar2,ppiVar7,piVar2 + 10);
              iVar5 = CONCAT31((int3)((uint)ppiVar7 >> 8),1);
              goto LAB_101bf30b;
            }
          }
        }
      }
      else {
        (**(code **)(*piVar9 + 8))(piVar9);
      }
    }
    iVar5 = 0;
  }
LAB_101bf30b:
  if (DAT_10388d00 == (local_14 ^ (uint)apiStack_138)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

