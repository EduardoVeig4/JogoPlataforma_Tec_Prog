#pragma once
#include "Inimigo.h"
#include "Textura1.h"

namespace Jogo {

	namespace Entidades {

		//namespace Inimigo {

			class Inimigo_comum : public Inimigo {
			private:
				int flag_mover;
				int flag_perseguir;

			public:
				Inimigo_comum();
				~Inimigo_comum();
				void setDy(float dyy);
				void perseguir();
				void mover();
				void executar();
				void matar();
			};
		//}
	}
}